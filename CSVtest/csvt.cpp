#include "csvt.h"

csvt::csvt(std::string path)
{
    CSVPAH=path;
}

std::vector<std::vector<float> > csvt::getcsvdata()
{





    csv::CSVReader csvread(CSVPAH);


    std::vector<std::string> Rclos=csvread.get_col_names();
    std::vector<std::vector<float> > redata;//(Rrows,std::vector<float>(Rclos.size(),0));
    printf("  CLOS: %d" ,Rclos.size());
    int i=0;
    for(auto ReadRow:csvread){
        std::vector<float> vec;
        for(int j=0;j<Rclos.size()-1;j++){


            vec.push_back( ReadRow[Rclos[j]].get<float>());

        }
        redata.push_back(vec);

    i++;

       }
    printf("%d",redata.size());
    return redata;

}
