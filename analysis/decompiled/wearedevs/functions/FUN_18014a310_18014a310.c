/* FUN_18014a310 @ 18014a310 */

void FUN_18014a310(undefined2 *param_1,char *param_2,uint param_3,byte param_4)

{
  char cVar1;
  undefined *puVar2;
  uint local_5c;
  undefined **local_58;
  undefined *local_50;
  undefined *local_48;
  uint **local_40;
  uint *local_38;
  code *local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined *local_10;
  
  local_5c = param_3;
  if (*param_2 == '\0') {
    if ((param_4 == 0) && ((param_3 & 1) == 0 && param_3 != 0)) goto LAB_18014a3b7;
    if ((1 < *(ulonglong *)PTR_DAT_1802fd448) ||
       (((1 < DAT_1802fcd70 - 1 &&
         ((DAT_1802fcd70 == 0 || (cVar1 = FUN_1801faaf0(&PTR_DAT_1802fcd60), cVar1 == '\0')))) ||
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fcd60), cVar1 == '\0')))) goto LAB_18014a4ae;
    local_48 = &DAT_180254e00;
    puVar2 = PTR_DAT_1802fcd60;
  }
  else {
    if ((param_4 & (byte)param_3) != 0) {
LAB_18014a3b7:
      *(undefined1 *)param_1 = 3;
      return;
    }
    if (((1 < *(ulonglong *)PTR_DAT_1802fd448) ||
        ((1 < DAT_1802fcd58 - 1 &&
         ((DAT_1802fcd58 == 0 || (cVar1 = FUN_1801faaf0(&PTR_DAT_1802fcd48), cVar1 == '\0')))))) ||
       (cVar1 = FUN_1801601d0(PTR_DAT_1802fcd48), cVar1 == '\0')) goto LAB_18014a4ae;
    local_48 = &DAT_180254ea0;
    puVar2 = PTR_DAT_1802fcd48;
  }
  local_30 = FUN_18014c040;
  local_38 = &local_5c;
  local_10 = puVar2 + 0x30;
  local_40 = &local_38;
  local_58 = &local_48;
  local_50 = &DAT_180254e58;
  local_28 = 1;
  local_20 = &local_58;
  local_18 = 1;
  FUN_180160ae0(puVar2,&local_28);
LAB_18014a4ae:
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_180254e78;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


