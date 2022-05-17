#include <R.h>
#include <Rinternals.h>

#include "survAUC_Cham_Diao.h"
#include "survAUC_SongZhou.h"
#include "survAUC_UNO.h"

#include <R_ext/Rdynload.h>

void R_init_survAUC(DllInfo *info) {
  R_RegisterCCallable("survAUC", "Cham_Diao",  (DL_FUNC) &Cham_Diao);
  R_RegisterCCallable("survAUC", "auc_SZ",  (DL_FUNC) &auc_SZ);
  R_RegisterCCallable("survAUC", "auc_uno",  (DL_FUNC) &auc_uno);
}
