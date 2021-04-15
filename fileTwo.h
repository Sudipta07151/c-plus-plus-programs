void returnTime(int weight){
        if(weight<0 || weight>7000){
            if(weight<0){
                return -1;
            }
            else{
                return 1;
            }
        }
        else{
            if(weight==0){
             return 0;
            }
            else if(weight>0 && weight<=2000){
                return 25;
            }
            else if(weight>=2001 && weight<=7000){
                return 35;
            }
        }
}
