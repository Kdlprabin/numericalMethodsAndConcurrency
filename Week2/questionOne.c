
//function to find the midpoint of the given coordinates
void midpoint(int x1, int x2, int y1, int y2){
	double xmid = (x1+x2)/2;
	double ymid = (y1+y2)/2;
	printf("The midpoint coordinate is : %f %f",xmid,ymid);
	}

int mainOne(){
	int x1,x2,y1,y2;
	printf("please enter x-coordinates: ");
	scanf("%d",&x1);
	scanf("%d",&x2);
	printf("please enter y-coordinates: ");
	scanf("%d",&y1);
	scanf("%d",&y2);
	midpoint(x1,x2,y1,y2);
	return 0;
}


