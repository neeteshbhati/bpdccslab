#2017A7PS0060U

print "Regex: any number of back-slashes, followed by any number of stars\n";
print "Enter the string\n";
my $string = <STDIN>;
chomp $string;

    
if ($string =~ /\\*\**/) 
{ 
    print "Match Found\n"; 
}

else
{ 
    print "Match Not Found\n"; 
}
