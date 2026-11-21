/* FUN_1801d3420 @ 1801d3420 */

void FUN_1801d3420(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined1 local_14;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = 0;
  local_14 = 0;
  lVar4 = FUN_1801d6150(&local_18,"fatal runtime error: Rust panics must be rethrown, aborting\n",
                        0x3c);
  if (((uint)lVar4 & 3) == 1) {
    uVar1 = *(undefined8 *)(lVar4 + -1);
    puVar2 = *(undefined8 **)(lVar4 + 7);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    thunk_FUN_1801d3330(lVar4 + -1,0x18,8);
  }
  pcVar3 = (code *)swi(0x29);
  (*pcVar3)(7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


