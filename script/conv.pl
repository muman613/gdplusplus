#!/usr/bin/perl

sub trim($)
{
	my $string = shift;
	$string =~ s/^\s+//;
	$string =~ s/\s+$//;
	return $string;
}

my $linenum = 1;
my $partline = undef;

my @protoArray = ();

while (<STDIN>) {
	chomp ;
	my $line = $_;
	$line = trim($line);

	if (not ($line =~ /^#/)) {
#		print "$linenum : $line\n";
		if ($line =~ m|^\s*extern\s+(void\|int\|gdImagePtr)\s+(gd[a-zA-Z0-9]+)\s+|) {
			my ($type, $funcName) = ($1, $2);
#			print "OK type = $type funcName = $funcName!\n";		
			if ($line =~ /;$/) {
				push (@protoArray, $line);
			} else {
				$partline = $line;
			}
			next;
		}
		if (defined $partline) {
			$partline .= $line;
			if ($partline =~ /;$/) {
				push (@protoArray, $partline);
				$partline = undef;		
			}
		}
	}
#	$linenum++;
}

for (my $i = 0 ; $i < scalar @protoArray ; $i++) {
	my $proto = $protoArray[$i];

	if ($proto =~ m|extern\s+(void\|int\|gdImagePtr)\s+(gd[a-zA-Z0-9]+)\s+(.*);$|) {
		my ($retType, $funcName, $parms) = ($1, $2, $3);
#		print "$protoArray[$i] [$1] [$2] [$3]\n";
#		print "typedef $retType (*_$funcName) $parms;\n";
#		printf "_$funcName $funcName;\n";
		printf "$funcName = (_$funcName)dlsym( m_lib, \"$funcName\" );\n";
	}
}



