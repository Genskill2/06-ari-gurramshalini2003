#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

string ari(string s)
{ float word=0,characters=0,sen=0;
  int r,i;
  float readindex;
  
  for(i=0;i<strlen(s);i++)
  { if(isalnum(s[i]))
  	characters++;
    else if(s[i]==' ')
    	word++;
    else if(s[i]=='.' || s[i]=='?' || s[i]=='!')
  	sen++;
    else
	 continue;
    
  }
  readindex=4.71*(characters/word)+0.5*(word/sen)-21.43;
  r=ceil(readindex);
  switch(r)
 {case 1:
  	return "Kindergarten";
        break;
  case 2:
	return "First/Second Grade";
	break;
  case 3:
	return "Third Grade";
        break;
  case 4:
	return "Fourth Grade";
	break;
  case 5:
	return "Fifth Grade";
	break;
  case 6:
	return "Sixth Grade";
	break;
  case 7:
	return "Seventh Grade";
	break;
  case 8:
	return "Eighth Grade";
	break;
  case 9:
	return "Ninth Grade";
	break;
  case 10:
	return "Tenth Grade";
	break;
  case 11:
	return "Eleventh Grade";
	break;
  case 12:
	return "Twelfth Grade";
	break;
  case 13:
	return "College student";
	break;
  case 14:
	return "Professor";
	break;
 }
}
