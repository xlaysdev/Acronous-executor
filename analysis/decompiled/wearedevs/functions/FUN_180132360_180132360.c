/* FUN_180132360 @ 180132360 */

void FUN_180132360(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  char **local_48;
  undefined *local_40;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  char ***local_20;
  undefined8 local_18;
  undefined *local_10;
  
  *(undefined1 *)(param_1 + 0x13b) = 1;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fbf10, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fbf00), (char)uVar3 != '\0')))) &&
      (cVar2 = FUN_1801601d0(PTR_DAT_1802fbf00,uVar3), cVar2 != '\0')))) {
    local_10 = PTR_DAT_1802fbf00 + 0x30;
    local_38 = "  notifying task";
    local_30 = 0x21;
    local_48 = &local_38;
    local_40 = &DAT_180247960;
    local_28 = 1;
    local_20 = &local_48;
    local_18 = 1;
    FUN_180160ae0(PTR_DAT_1802fbf00,&local_28);
  }
  lVar1 = *(longlong *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 8))(*(undefined8 *)(param_1 + 0xa0));
  }
  return;
}


