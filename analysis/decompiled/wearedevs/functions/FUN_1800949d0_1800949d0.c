/* FUN_1800949d0 @ 1800949d0 */

undefined8 FUN_1800949d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 local_68 [2];
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 uStack_40;
  char cStack_3f;
  undefined8 local_38;
  longlong local_28;
  char local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x70) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  if (*(char *)(param_1 + 0x61) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("not droppedC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\hyper-util-0.1.20\\src\\client\\legacy\\pool.rs"
                  ,0xb,&DAT_180210c58);
  }
  if (*(char *)(param_1 + 0x40) != '\x02') {
    bVar2 = FUN_18012bfb0(param_1 + 0x30);
    if (bVar2 == 2) {
      return 1;
    }
    if ((bVar2 & 1) != 0) {
      uVar3 = FUN_180115600();
      FUN_1801048d0(local_68,uVar3);
      if (cStack_3f == '\x04') {
        return 1;
      }
      goto LAB_180094a0e;
    }
  }
  cStack_3f = '\x03';
LAB_180094a0e:
  cVar1 = cStack_3f;
  uVar3 = CONCAT44(uStack_44,local_48);
  local_19 = *(char *)(param_1 + 0x70);
  if (local_19 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                  ,0x28,&DAT_18020f220,param_4,local_68[0],uStack_60,local_58,uStack_50,uVar3,
                  uStack_40,local_38);
  }
  local_28 = param_1;
  FUN_1800999e0(param_1);
  *(undefined1 *)(local_28 + 0x70) = 2;
  local_48 = (undefined4)uVar3;
  uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (cVar1 != '\x03') {
    cStack_3f = cVar1;
    FUN_18009acf0(local_68);
  }
  return 0;
}


