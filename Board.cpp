#include "Board.hpp"
#include "Direction.hpp"
using namespace std;

using ariel::Direction;
const uint _max=1000;


namespace ariel{
  

void Board::post(uint row, uint col, Direction direction, string Ad){

    for(uint i=0; i<_max; i++){
        for(uint j=0; j<_max;j++){
          if(i==row && j==col && Ad.length()>0){

            if(direction==Direction::Horizontal ){
              for (uint k= 0; k < Ad.length(); k++){
                      messageBoard[i][j++]=Ad.at(k);
                  }
                 
            }
             if(direction==Direction::Vertical){
                for (uint k= 0; k < Ad.length(); k++){
                    messageBoard[i++][j]=Ad.at(k);
                    }
                  }
             } 
          }
      }
  }



string Board::read(uint row, uint col, Direction direction,uint letters){
  string addingOnBoard;
    for(uint i=0; i<_max; i++){
        for(uint j=0; j<_max;j++){
            if(i==row && j==col && letters>0){
              if(direction==Direction::Horizontal){
              for (uint k= 0; k < letters; k++){
                  if(messageBoard[i][j].empty()){
                      addingOnBoard+='_';
                      }
                      addingOnBoard+=messageBoard[i][j];
                   j++;
              }   
            }
          if(direction==Direction::Vertical){
                for (uint k= 0; k < letters; k++){
                if(messageBoard[i][j].empty()) {
                      addingOnBoard+='_';
                      }
                      addingOnBoard+=messageBoard[i][j];
                i++;
                }
            
          }
        }
      } 
   }

      return addingOnBoard;     
    }
        


void Board::show(){

         for(uint i=0;i< messageBoard.size();i++){
           for(uint j=0; j< messageBoard[i].size(); j++ ){
            cout<< messageBoard[i][j];
           }
           cout<<endl;
         }  
}


}
