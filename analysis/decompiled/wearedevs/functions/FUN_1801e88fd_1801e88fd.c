/* FUN_1801e88fd @ 1801e88fd */

undefined8 FUN_1801e88fd(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar6 = FUN_1801edcb0("?",1);
      return uVar6;
    }
  }
  else {
    FUN_1801e71c0(&local_38,param_1);
    if (CONCAT44(uStack_34,local_38) == 0) {
      if (param_1[4] != 0) {
        pcVar7 = "{invalid syntax}";
        if ((byte)uStack_30 != 0) {
          pcVar7 = "{recursion limit reached}";
        }
        cVar5 = FUN_1801edcb0(pcVar7,(ulonglong)(byte)uStack_30 * 9 + 0x10);
        if (cVar5 != '\0') {
          return 1;
        }
      }
      param_1[2] = CONCAT44(uStack_24,local_28);
      param_1[3] = CONCAT44(uStack_1c,uStack_20);
      *param_1 = CONCAT44(uStack_34,local_38);
      param_1[1] = CONCAT44(uStack_2c,uStack_30);
    }
    else if (param_1[4] != 0) {
      lVar1 = *param_1;
      lVar2 = param_1[1];
      lVar3 = param_1[2];
      lVar4 = param_1[3];
      *(undefined4 *)param_1 = local_38;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_34;
      *(undefined4 *)(param_1 + 1) = uStack_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
      *(undefined4 *)(param_1 + 2) = local_28;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_24;
      *(undefined4 *)(param_1 + 3) = uStack_20;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_1c;
      uVar6 = FUN_1801e7926(param_1);
      *param_1 = lVar1;
      param_1[1] = lVar2;
      param_1[2] = lVar3;
      param_1[3] = lVar4;
      return uVar6;
    }
  }
  return 0;
}


