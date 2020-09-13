public static boolean detectCapitalUse(String word) {
        if(word == null)return false;
        if(word.length()==1)return true;
        int size = word.length();
        boolean count = false;


         char first = word.charAt(0);
         char second = word.charAt(1);
         if(first<97 && second>=97){
             for(int i =1 ;i<size;i++){
                 if(word.charAt(i)>97) count= true;
                 else if(word.charAt(i)<90){
                     count= false;
                 }
             } } else if(first>=97){

            for(int i =1 ;i<size;i++){
                if(word.charAt(i)>=97) count= true;
                else {
                    count= false;
                }
            } }
         if(first<97 && second<97){

             for(int i =2 ;i<size;i++){
                 if(word.charAt(i)<=97) count= true;
                 else {
                     count= false;
                 }
             }

         }


return count;
    }