/* FUN_180092210 @ 180092210 */

void FUN_180092210(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  
  cVar7 = FUN_18017f460(param_1,param_1 + 0x50);
  if (cVar7 != '\0') {
    iVar4 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("JoinHandle polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_18020ee28,param_4,iVar4,*(undefined4 *)(param_1 + 0x38),
                    *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    if (((*param_2 == '\0') && (*(longlong *)(param_2 + 8) != 0)) &&
       (lVar2 = *(longlong *)(param_2 + 0x10), lVar2 != 0)) {
      puVar3 = *(undefined8 **)(param_2 + 0x18);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)(lVar2);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2]);
      }
    }
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
  }
  return;
}


