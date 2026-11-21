/* FUN_180137200 @ 180137200 */

void FUN_180137200(undefined2 *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  uint local_74;
  undefined **local_70;
  undefined *local_68;
  undefined *local_60;
  uint **local_58;
  uint *local_50;
  code *local_48;
  uint *local_40;
  code *local_38;
  undefined8 local_30;
  undefined ***local_28;
  undefined8 local_20;
  undefined *local_18;
  
  if (param_3 <= *(uint *)(param_2 + 0x68)) {
    *(uint *)(param_2 + 0x68) = param_3;
    *(undefined1 *)param_1 = 3;
    return;
  }
  if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
     (((local_74 = param_3, DAT_1802fc358 - 1 < 2 ||
       ((DAT_1802fc358 != 0 && (cVar1 = FUN_1801faaf0(&PTR_DAT_1802fc348), cVar1 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fc348), cVar1 != '\0')))) {
    local_18 = PTR_DAT_1802fc348 + 0x30;
    local_50 = &local_74;
    local_48 = FUN_1801392c0;
    local_38 = FUN_1801392c0;
    local_60 = &DAT_18024c3f8;
    local_58 = &local_50;
    local_70 = &local_60;
    local_68 = &DAT_18024c458;
    local_30 = 1;
    local_28 = &local_70;
    local_20 = 1;
    local_40 = (uint *)(param_2 + 0x68);
    FUN_180160ae0(PTR_DAT_1802fc348,&local_30);
  }
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined ***)(param_1 + 4) = &PTR_LAB_18024c478;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


