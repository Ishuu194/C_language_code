int main()
{
	FILE *ab;
	char c;
     
    ab=fopen("Data.txt","w");
    
    fputc('a',ab);  //witing single charecter in file
    fclose(ab);
	
}
