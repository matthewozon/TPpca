#include <iostream>
#include <stdio.h>
#include <sstream>

#include <C_imgMatrix.h>
#include <vector>

#include <C_pca.h>



int main(int argc, char *argv[])
{
    //dummy display
    if(argc!=2)
    {
        std::cout << "commande " << argv[0] << " fileName<char string>" << std::endl;
        return -2;
    }
    C_imgMatrix<double> imgDoub(argv[1]);
    imgDoub = imgDoub.Transpose();
    imgDoub.display(0);
    imgDoub = imgDoub.subset(10,imgDoub.endL-10,10, imgDoub.endC-10);
    imgDoub.display(0);
    return 1;
}
