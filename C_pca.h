#ifndef C_PCA_H
#define C_PCA_H

#include <C_matrix.h>

/*attention, on ne demande pas de coder la svd ou la diagonalisation d'un systeme symtrique reel,
 *  c'est code dans C_matrix*/
class C_pca
{
public:
    C_pca();

    //retourne les matrices de passage et diagonale
    std::vector<C_matrix<double> > pcaEIG(C_matrix<double> sampleColumn /*each column is a sample*/);// a coder
    //retourne les vecteurs propres droite et gauche et les valeur singuliere
    std::vector<C_matrix<double> > pcaSVD(C_matrix<double> sampleColumn /*each column is a sample*/);// a coder

    //calcul la matrice de covariance
    C_matrix<double> covMatrix(C_matrix<double> sampleColumn /*each column is a sample*/);
    //calcul un coeficent de la matrice de covariance
    double covCoef(C_matrix<double> sampleX, C_matrix<double> sampleY);// a coder
};

#endif // C_PCA_H
