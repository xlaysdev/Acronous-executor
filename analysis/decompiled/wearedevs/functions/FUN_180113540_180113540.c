/* FUN_180113540 @ 180113540 */

undefined8 * FUN_180113540(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  plVar5 = (longlong *)param_2[1];
  pcVar4 = (char *)plVar5[5];
  if (pcVar4 == (char *)0x0) {
    uVar6 = 0;
    do {
      if ((longlong *)*param_2 == plVar5) goto LAB_1801135f0;
      SwitchToThread();
      plVar5 = (longlong *)param_2[1];
      pcVar4 = (char *)plVar5[5];
    } while (pcVar4 == (char *)0x0);
  }
  param_2[1] = (longlong)pcVar4;
  if (*plVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: (*tail).value.is_none()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-channel-0.3.34\\src\\mpsc\\queue.rs"
                  ,0x29,&DAT_18023f1d8);
  }
  if (*pcVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: (*next).value.is_some()",0x29,&DAT_18023f220);
  }
  uVar6 = *(undefined8 *)(pcVar4 + 8);
  uVar1 = *(undefined8 *)(pcVar4 + 0x10);
  uVar2 = *(undefined8 *)(pcVar4 + 0x18);
  uVar3 = *(undefined8 *)(pcVar4 + 0x20);
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  if (*plVar5 != 0) {
    FUN_180044a30(plVar5 + 1);
  }
  thunk_FUN_1801d3330(plVar5,0x30,8);
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar1;
  uVar6 = 1;
LAB_1801135f0:
  *param_1 = uVar6;
  return param_1;
}


