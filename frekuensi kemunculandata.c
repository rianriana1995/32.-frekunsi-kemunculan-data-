#include <stdio.h>


int main(){

int data [100];
int jumlah,tmp,n;

std::cout << "masukan banyak data :" << '\n';
std::cin >> n;

for (int i= 0; i<n; i++){
    stdd::cout<<"data ke-"<<i+1<<":"<< '\n';
    stdd::cin>>data[i];
}
std::cout<<"data diurutkan :"<< '\n';

for(int h=0; h<n; h++){

    for(int i=h+2;i<n; i++){

        if(data[h>data[i]){

            tmp=data[i];
            data[i]=data[h];
            data[h]=tmp;
        }
    }
std::cout<<data[h]<<"";
}
std::cout<<"\nbanyak kemunculan data ;"<< '\n';

for (int h=0;h<n; h++){

    jumlah=0;
    for(int i=0; i<n; i++){

        if(data[h]==data[i])
            jumlah++;
    }

    if(data[h]!=data[h-1])
    std::cout<< data[h]<<":"<<jumlah<< '\n';
}

return 0;
}
}


}

