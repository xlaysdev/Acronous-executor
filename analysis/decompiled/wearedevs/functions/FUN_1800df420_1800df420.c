/* FUN_1800df420 @ 1800df420 */

void FUN_1800df420(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  uVar2 = *param_1;
  lVar4 = 0;
  if (1 < uVar2) {
    lVar4 = uVar2 - 2;
  }
  if (lVar4 == 0) {
    if ((int)uVar2 != 2) {
      uVar2 = param_1[0x2a];
      if (uVar2 != 5) {
        lVar4 = 0;
        if (1 < uVar2) {
          lVar4 = uVar2 - 2;
        }
        if (lVar4 == 1) {
          uVar2 = param_1[0x2b];
          puVar3 = (undefined8 *)param_1[0x2c];
          if ((code *)*puVar3 != (code *)0x0) {
            (*(code *)*puVar3)(uVar2);
          }
          if (puVar3[1] != 0) {
            thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
            FUN_180099f40(param_1);
            return;
          }
        }
        else if (lVar4 == 0) {
          if ((int)uVar2 == 2) {
            uVar2 = param_1[0x2b];
            puVar3 = (undefined8 *)param_1[0x2c];
            if ((code *)*puVar3 != (code *)0x0) {
              (*(code *)*puVar3)(uVar2);
            }
            if (puVar3[1] != 0) {
              thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
            }
          }
          else {
            FUN_180043680(param_1 + 0x2a);
          }
          if ((char)param_1[0x3c] != '\x03') {
            FUN_18000adf0(param_1 + 0x3c);
          }
        }
      }
      FUN_180099f40(param_1);
      return;
    }
  }
  else if (lVar4 == 1) {
    cVar1 = (char)param_1[0xf];
    if (cVar1 == '\x02') {
      FUN_18009acf0();
      return;
    }
    if (cVar1 != '\x03') {
      if (cVar1 == '\x04') {
        uVar2 = param_1[1];
        FUN_1800e1650();
        thunk_FUN_1801d3330(uVar2,0x540,8);
        return;
      }
      FUN_1800e1260();
      return;
    }
  }
  return;
}


