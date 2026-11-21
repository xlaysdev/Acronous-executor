/* FUN_1801bfa10 @ 1801bfa10 */

undefined8 FUN_1801bfa10(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong *)param_2[4] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&DAT_180287000);
  }
  FUN_1801b8c90(param_1,*(longlong *)param_2[4] - *(longlong *)param_2[5],param_3,
                *(undefined8 *)param_2[6],((undefined8 *)param_2[6])[1],(int)param_2[7],
                (int)param_2[8],param_2[9]);
  if (*param_2 != 0) {
    if ((int)*param_2 == 1) {
      lVar2 = param_2[1];
      lVar3 = param_2[3];
      while( true ) {
        lVar3 = lVar3 + -1;
        if (lVar2 == 0) break;
        lVar2 = *(longlong *)(lVar2 + 0x18);
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          param_2[2] = 0;
        }
        else {
          *(undefined8 *)(lVar2 + 0x20) = 0;
        }
        param_2[3] = lVar3;
        FUN_1801b8990();
      }
    }
    else {
      lVar2 = param_2[1];
      puVar1 = (undefined8 *)param_2[2];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(lVar2);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_1801d3330(lVar2,puVar1[1],puVar1[2]);
      }
    }
  }
  return param_1;
}


