//         int n,sum=0;
//		 cout<<"enter range:";                                       ///fibonacci series
//		 cin>>n;                                                    /// 1+2+3=6
//		 for(int i=1;i<=n;i++)   {
//		 	
//		 	if(i==n){
//		 		cout<<i<<"=";
//			 }
//			 else
//			 cout<<i<<"+";
//			 sum=sum+i;
//		 }   
//		  cout<<sum;                   
//}

//        int n,sum,fact=1;
//        cout<<"enter number:";
//        cin>>n;
//        cout<<n<<"! = ";               //formating                           //5!=5x4x3x2x1
//        for(int i=n;i>=1;i--){
//        	if(i==1){
//        	cout<<i<<"=";
//        
//			}
//			else
//	         	cout<<i<<"*";
//			    fact=fact*i;
//		}
//		cout<<fact;
//}

//         int n,sum;
//		 cout<<"enter number";
//		 cin>>n;                                                         //(1+1)=2
	 for(int i=1;i<=n;i++) {
	 	if(i==n){
		 		cout<<"("<<i<<"+"<<i<<")"<<"=";
		 		
			 }
			 else
			 cout<<"("<<i<<"+"<<i<<")"<<"+";
		 		
			 sum=sum+i+i;
		 }   
		 cout<<sum<<endl;          


//        int n,sum;
//		cout<<"enter number:";
//		cin>>n;
//		for(int i=1;i<=n;i++) {
//			if(i==n){                                                     (1+1)-(2+2)
//				cout<<"("<<i<<"+"<<i<<")"<<"=";
//			}
//			else
//			cout<<"("<<i<<"+"<<i<<")"<<"-";
//			sum=sum+i+i;
//		}  
//		cout<<sum<<endl;              


   //     int n,sum;
//		cout<<"enter number";
//		cin>>n;                                                       (1*1)+ (2*2) +(3*3)
//		for(int i=1;i<=n;i++){
//		
//		if (i==n) {
//			cout<<"("<<i<<"*"<<i<<")"<<"=";
//		}  
//		else{
//	     	cout<<"("<<i<<"*"<<i<<")"<<"+";
//		}   
//		sum=sum+i+i;
