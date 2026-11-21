/* FUN_18009f370 @ 18009f370 */

void FUN_18009f370(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  if (*param_1 != 2) {
    lVar1 = param_1[1];
    puVar2 = (undefined8 *)param_1[2];
    pcVar3 = (code *)*puVar2;
    if (*param_1 == 0) {
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(lVar1);
      }
    }
    else if (pcVar3 != (code *)0x0) {
      (*pcVar3)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


