/* FUN_1801bbae0 @ 1801bbae0 */

void FUN_1801bbae0(char param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong local_68;
  longlong lStack_60;
  char local_58;
  undefined7 uStack_57;
  longlong lStack_50;
  char local_2e;
  
  if ((param_1 != '\0') && ((param_1 == '\x01' || (SBORROW8(0,*param_4))))) {
    FUN_1801ddab0(&local_68,param_2,param_3);
    if ((local_2e == '\0') && ((byte)(local_58 - 5U) < 2)) {
      lVar1 = *param_4;
      if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
        thunk_FUN_1801d3330(param_4[1],lVar1,1);
      }
      *param_4 = -0x8000000000000000;
    }
    else {
      uVar3 = param_3;
      lVar1 = FUN_1801de400(param_2,param_3);
      if (lVar1 != 0) {
        uVar4 = uVar3;
        lVar2 = FUN_1801de400(lVar1);
        if (lVar2 == 0) {
          param_2 = lVar1;
          param_3 = uVar3;
        }
        else {
          do {
            param_3 = uVar4;
            param_2 = lVar2;
            uVar4 = param_3;
            lVar2 = FUN_1801de400(param_2);
          } while (lVar2 != 0);
        }
      }
      FUN_1801ec9d0(&local_68,param_2,param_3);
      lVar1 = *param_4;
      if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
        thunk_FUN_1801d3330(param_4[1],lVar1,1);
      }
      param_4[2] = CONCAT71(uStack_57,local_58);
      param_4[3] = lStack_50;
      *param_4 = local_68;
      param_4[1] = lStack_60;
    }
  }
  return;
}


