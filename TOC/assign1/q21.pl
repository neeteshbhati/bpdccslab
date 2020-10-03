#2017A7PS0060U

print "Regex: at least one ‘a’, followed by any number of ‘b’s\n";
print "Enter the string\n";
my $string = <STDIN>;
chomp $string;
     
if ($string =~ /a+b*/) 
{ 
    print "Match Found\n"; 
}

else
{ 
    print "Match Not Found\n"; 
} 
