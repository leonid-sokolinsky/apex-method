/*==============================================================================
Project: LiFe
Theme: Apex Method (Predictor + Corrector)
Module: Problem-Data.h (Problem Data)
Author(s): Leonid B. Sokolinsky, Irina M. Sokolinskaya
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 

//========================== Problem variables ====================================
static double PD_siftLength;		// Shift length
//========================== Problem structures ====================================
static PT_matrix_T PD_A;
static PT_column_T PD_b;
static PT_vector_T PD_c;		// Objective Function Coefficients
static PT_column_T PD_normSquare_a; // a_i1*a_i1+...+a_in*a_in
static PT_vector_T PD_objectiveUnitVector; // c/=||c||
static PT_vector_T PD_apex;		// Apex Point
static PT_vector_T PD_basePoint;		// Base point on Polytope
static PT_vector_T PD_direction;		// Unit vector to set shift direction
//=========================== Debug Information =====================================
/* debug */
static bool PD_caseApexPojection = true;
static bool PD_caseMovementOnPlytope;
static bool PD_casePointProjection;
/* end debug */