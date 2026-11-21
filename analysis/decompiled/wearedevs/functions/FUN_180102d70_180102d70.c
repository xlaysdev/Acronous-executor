/* FUN_180102d70 @ 180102d70 */

int * FUN_180102d70(int *param_1,longlong *param_2,undefined8 *param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 local_70;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 local_50;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_70 = 2;
  local_41 = 0;
  lVar2 = FUN_18016c6f0();
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      cVar4 = '\0';
      cVar5 = '\0';
      goto LAB_180102e24;
    }
    local_41 = 0;
    FUN_1801d8880(lVar2,FUN_180109b10);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  cVar4 = *(char *)(lVar2 + 0x44);
  cVar5 = *(char *)(lVar2 + 0x45);
  cVar3 = cVar5;
  if (cVar4 == '\x01') {
    if (cVar5 != '\0') {
      cVar3 = cVar5 + -1;
      goto LAB_180102df9;
    }
    local_41 = 0;
    FUN_18016e580(param_3);
    bVar1 = true;
    cVar5 = '\0';
  }
  else {
LAB_180102df9:
    *(char *)(lVar2 + 0x45) = cVar3;
    bVar1 = false;
  }
  local_42 = 0;
  local_44 = 0;
  local_41 = 0;
  FUN_18016e8a0((longlong)&local_44 + 1);
  if (bVar1) {
    param_1[0] = 2;
    param_1[1] = 0;
    return param_1;
  }
LAB_180102e24:
  local_44._0_1_ = cVar4;
  local_44._1_1_ = cVar5;
  (**(code **)(*(longlong *)(*param_2 + 0x10) + 0x18))(*param_2,&local_70,*param_3);
  if ((int)local_70 != 2) {
    local_44._0_1_ = '\0';
  }
  *(undefined8 *)(param_1 + 8) = local_50;
  param_1[4] = local_60;
  param_1[5] = iStack_5c;
  param_1[6] = iStack_58;
  param_1[7] = iStack_54;
  *param_1 = (int)local_70;
  param_1[1] = local_70._4_4_;
  param_1[2] = iStack_68;
  param_1[3] = iStack_64;
  local_41 = 1;
  FUN_18016e8a0(&local_44);
  return param_1;
}


