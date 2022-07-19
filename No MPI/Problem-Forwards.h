/*==============================================================================
Project: LiFe
Theme: Apex Method (No MPI)
Module: Problem-Forwards.h (Problem Function Forwards)
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-bsfTypes.h"
#include "Problem-Types.h"
//====================== Problem Functions ===========================
bool		Conversion();
PT_float_T	Distance(PT_vector_T x, PT_vector_T y);
bool		GetDirection(PT_vector_T startPoint, PT_vector_T endPoint, PT_vector_T unitVector);
bool		LoadMatrixFormat();
PT_float_T	ObjectiveF(PT_vector_T x);
void		ObjectiveUnitVector(PT_vector_T objectiveUnitVector);
bool		OpenTraceFile();
bool		PointInHalfspace(PT_vector_T point, PT_vector_T a, PT_float_T b);
bool		PointInHalfspace_s(PT_vector_T point, PT_vector_T a, PT_float_T b);
bool		PointInPolytope(PT_vector_T x);
bool		PointInPolytope_s(PT_vector_T x);
void		DetermineDirection(PT_vector_T x, bool* exit, bool* repeat);
void		ProblemOutput(double elapsedTime);
bool		SavePoint(PT_vector_T x, const char* filename, double elapsedTime);
void		Shift(PT_vector_T basePoint, PT_vector_T direction, PT_float_T siftLength, PT_vector_T endPoint);
void		SkipComments(FILE* stream);
void		SortObjVarI();
void		Surfacing(PT_vector_T unitVectorToSurface, PT_vector_T basePoint, PT_vector_T x, bool* goOn);
void		Vector_Addition(PT_vector_T x, PT_vector_T y, PT_vector_T z);
void		Vector_Copy(PT_vector_T fromPoint, PT_vector_T toPoint);
void		Vector_DivideByNumber(PT_vector_T x, double r, PT_vector_T y);
void		Vector_DivideEquals(PT_vector_T x, double r);
PT_float_T	Vector_DotProductSquare(PT_vector_T x, PT_vector_T y);
void		Vector_EpsZero(PT_vector_T x);
PT_float_T	Vector_Norm(PT_vector_T x);
PT_float_T	Vector_NormSquare(PT_vector_T x);
void		Vector_MinusEquals(PT_vector_T equalPoint, PT_vector_T minusVector);
void		Vector_MultiplyByNumber(PT_vector_T x, double r, PT_vector_T y);
void		Vector_MultiplyEquals(PT_vector_T x, double r);
void		Vector_PlusEquals(PT_vector_T equalVector, PT_vector_T plusVector);
bool		Vector_ProjectOnHalfspace(PT_vector_T point, PT_vector_T a, PT_float_T b, PT_vector_T projection);
void		Vector_ResetToZero(PT_vector_T x);
void		Vector_Round(PT_vector_T x);
bool		Vector_Relaxation(PT_vector_T sumOfProjections, int numberOfProjections, PT_vector_T PD_relaxationVector);
void		Vector_Subtraction(PT_vector_T x, PT_vector_T y, PT_vector_T z);
void		Vector_Unit(PT_vector_T vector);
void		WriteTrace(PT_vector_T x);
//====================== Macros ================================
#define PF_MIN(x,y) (x<y?x:y)
#define PF_MAX(x,y) (x>y?x:y)