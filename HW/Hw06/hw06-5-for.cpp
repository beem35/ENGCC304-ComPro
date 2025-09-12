#include <stdio.h>

int main(){
    
    int num ; // เก็บค่าตำเลขที่ป้อน
    bool chack ; // ตรวจสอบว่าหารมีเศษหรือไม่

    printf( "Please enter the number.\n" ) ;
    scanf( " %d" , &num ) ;

    if ( num <=1 ) { 
        // หาก num มีค่าน้อนกว่าหรือเท่ากับ 1 จะไม่หาจำนวนเฉพาะ
        printf( "Please enter a number greater than 1.\n" ) ;
    } else {
        for ( ; 2 <= num ; num-- ) { 
            // เรียงเลขจากมากไปน้อย
            for ( int n = 2 ; n*n <= num ; n++ ) { 
                // หากผลเลขกำลังสอนงมีค่าไม่มากกว่า num จะทำงาน
                if ( num % n != 0 ) { 
                    //หากหารแล้วไม่ลงตัวมีโอกาศเป็นจำนวนเฉพาะ
                    chack = 1 ;     
                } else { 
                    // หากลงตัว จะถือว่าไม่เป็นจำนวนเฉพาะทันที
                    chack = 0 ; 
                    break ;
                }//end if else
            }//end for loop

            if ( num == 2 || num == 3 ) {
                // หากวนมาถึงเลข 2 หรือ 3 จะบอกทันทีว่าเป็นเลข ทศนิยม
                chack = 1 ;
            }//end if else

            if ( chack == 1 ) {
                // หาก chack เป็นจริงในรอบนั้น แสดงออกมา
                printf( "%d ",num ) ;
            }//end if else
        }//end for loop
    }//end if else

    return 0 ;
}