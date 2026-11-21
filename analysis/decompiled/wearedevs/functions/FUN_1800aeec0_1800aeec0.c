/* FUN_1800aeec0 @ 1800aeec0 */

void FUN_1800aeec0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x90);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x88) == '\x03') {
      FUN_1800b10f0(param_1 + 0x40);
      *(undefined1 *)(param_1 + 0x89) = 0;
    }
    else if (*(char *)(param_1 + 0x88) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001800aef34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      closesocket(*(SOCKET *)(param_1 + 0x30));
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_1800af0d0(param_1 + 0x98);
      return;
    }
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x110) == '\x03') {
        FUN_1800b10f0(param_1 + 200);
        *(undefined1 *)(param_1 + 0x111) = 0;
        return;
      }
      if (*(char *)(param_1 + 0x110) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001800aef03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        closesocket(*(SOCKET *)(param_1 + 0xb8));
        return;
      }
    }
  }
  return;
}


