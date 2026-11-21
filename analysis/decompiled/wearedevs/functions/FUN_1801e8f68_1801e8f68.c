/* FUN_1801e8f68 @ 1801e8f68 */

undefined8 FUN_1801e8f68(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 local_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char local_60;
  byte bStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar4 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      bVar7 = lVar6 == 0;
      lVar6 = lVar6 + -1;
      if ((bVar7) || (param_1[4] == 0)) {
LAB_1801e8fe7:
        FUN_1801e6f57(&local_60,param_1,0x73);
        if (local_60 == '\x01') {
          bVar5 = bStack_5f;
          if (param_1[4] == 0) goto LAB_1801e9115;
          pcVar3 = "{invalid syntax}";
          if (bStack_5f != 0) {
            pcVar3 = "{recursion limit reached}";
          }
          lVar4 = (ulonglong)bStack_5f * 9 + 0x10;
LAB_1801e9104:
          cVar2 = FUN_1801edcb0(pcVar3,lVar4);
          if (cVar2 != '\0') {
            return 1;
          }
LAB_1801e9115:
          *param_1 = 0;
          *(byte *)(param_1 + 1) = bVar5;
          return 0;
        }
        if (*param_1 == 0) goto LAB_1801e907a;
        FUN_1801e6fcb(&local_60,param_1);
        if (CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,local_60))) == 0) {
          bVar5 = (byte)uStack_58;
          if (param_1[4] == 0) goto LAB_1801e9115;
          lVar4 = (ulonglong)(byte)uStack_58 * 9 + 0x10;
          pcVar3 = "{invalid syntax}";
          if ((byte)uStack_58 != 0) {
            pcVar3 = "{recursion limit reached}";
          }
          goto LAB_1801e9104;
        }
        local_78 = local_50;
        uStack_74 = uStack_4c;
        uStack_70 = uStack_48;
        uStack_6c = uStack_44;
        uStack_84 = uStack_5c;
        uStack_80 = uStack_58;
        uStack_7c = uStack_54;
        if (param_1[4] != 0) {
          cVar2 = FUN_1801eaf33(local_88);
          if (cVar2 != '\0') {
            return 1;
          }
          if ((param_1[4] != 0) && (cVar2 = FUN_1801edcb0(&DAT_1802923e9,2), cVar2 != '\0')) {
            return 1;
          }
        }
        cVar2 = FUN_1801e81c8(param_1,1);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      else {
        cVar2 = FUN_1801edcb0(", ",2);
        if (cVar2 != '\0') {
          return 1;
        }
        if (*param_1 != 0) goto LAB_1801e8fe7;
LAB_1801e907a:
        if ((param_1[4] != 0) && (cVar2 = FUN_1801edcb0("?",1), cVar2 != '\0')) {
          return 1;
        }
      }
      lVar4 = *param_1;
    } while (lVar4 != 0);
  }
  return 0;
}


