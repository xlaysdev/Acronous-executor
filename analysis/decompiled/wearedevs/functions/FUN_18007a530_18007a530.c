/* FUN_18007a530 @ 18007a530 */

void FUN_18007a530(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if ((char)param_1[0xe] != '\x03') {
    if ((char)param_1[0xe] != '\x02') {
      FUN_180079320();
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      puVar2 = (undefined8 *)param_1[1];
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)(lVar1);
      }
      if (puVar2[1] != 0) {
        thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      }
    }
    if (*(char *)((longlong)param_1 + 0x29) != '\x02') {
      FUN_18003c220(param_1 + 2);
      return;
    }
  }
  return;
}


