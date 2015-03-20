#include <C_pca.h>

C_pca::C_pca()
{
    //
}



std::vector<C_matrix<double> > C_pca::pcaEIG(C_matrix<double> sampleColumn /*each column is a sample*/)
{
    std::vector<C_matrix<double> > toto;
    return toto;
}

std::vector<C_matrix<double> > C_pca::pcaSVD(C_matrix<double> sampleColumn /*each column is a sample*/)
{
    std::vector<C_matrix<double> > tata;
    return tata;
}


C_matrix<double> C_pca::covMatrix(C_matrix<double> sampleColumn /*each column is a sample*/)
{
    C_matrix<double> covMAT(sampleColumn.getNbColumn(),sampleColumn.getNbColumn());
    for(int i=0 ; i<sampleColumn.getNbColumn() ; i++)
    {
        for(int j=i ; j<sampleColumn.getNbColumn() ; j++)
        {
            covMAT(i,j) = covCoef(sampleColumn.subset(0,sampleColumn.endL,i,i),sampleColumn.subset(0,sampleColumn.endL,j,j));
            if(i!=j) covMAT(j,i) = covMAT(i,j);
        }
    }
    return covMAT;
}

double C_pca::covCoef(C_matrix<double> sampleX, C_matrix<double> sampleY)
{
    //column matrices?
    if(sampleX.getNbColumn()!=1 || sampleY.getNbColumn()!=1) throw "matrices must be column... 1 column and many rows";
    if(sampleX.getNbRow()!=sampleY.getNbRow()) throw "matrix dimension mismatches";

    //calcul des moyennes
    double muX=0.0;
    double muY=0.0;

    //calcul de la covariance
    double sigXY=0.0;
    return sigXY;
}
