/* FUN_1801029e0 @ 1801029e0 */

void FUN_1801029e0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  
  cVar7 = FUN_18017f460(param_1,param_1 + 0x68);
  if (cVar7 != '\0') {
    iVar2 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("JoinHandle polled after completionC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tokio-1.53.1\\src\\runtime\\task\\core.rs"
                    ,0x45,&DAT_18023ea48,param_4,iVar2,*(undefined4 *)(param_1 + 0x40),
                    *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),
                    *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
    }
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    if (*param_2 != 2) {
      FUN_1801027f0(param_2);
    }
    *(undefined8 *)(param_2 + 8) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 6) = uVar6;
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
  }
  return;
}


