/* FUN_180099000 @ 180099000 */

void FUN_180099000(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  pcVar3 = (code *)*puVar2;
  if (*(char *)((longlong)param_1 + 0x11) == '\x02') {
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar1);
    }
  }
  else if (pcVar3 != (code *)0x0) {
    (*pcVar3)(uVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  return;
}


