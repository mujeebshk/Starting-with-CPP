cout<<"First Ten Prime Numbers are"<<"2";
	for(i=3;i>0;++i)
	{
		for(j=2;j<=i;++j)
		{
			if(i%j==0)
			b=1;
			break;
		}
		if(b==0)
		{
			cout<<"n"<<i;
			count++;

		}
		b=0;
		if(count==10)
			break;
	}