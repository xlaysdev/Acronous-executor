/* FUN_1801ba3a0 @ 1801ba3a0 */

void FUN_1801ba3a0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1[4] != 0) {
    param_1[7] = 8;
    param_1[8] = 0;
  }
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      lVar2 = param_1[1];
      lVar3 = param_1[3];
      while( true ) {
        lVar3 = lVar3 + -1;
        if (lVar2 == 0) break;
        lVar2 = *(longlong *)(lVar2 + 0x18);
        param_1[1] = lVar2;
        if (lVar2 == 0) {
          param_1[2] = 0;
        }
        else {
          *(undefined8 *)(lVar2 + 0x20) = 0;
        }
        param_1[3] = lVar3;
        FUN_1801b8990();
      }
    }
    else {
      lVar2 = param_1[1];
      puVar1 = (undefined8 *)param_1[2];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(lVar2);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_1801d3330(lVar2,puVar1[1],puVar1[2]);
        return;
      }
    }
  }
  return;
}


