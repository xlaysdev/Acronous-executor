/* FUN_180090d40 @ 180090d40 */

undefined8 * FUN_180090d40(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int *piVar5;
  int local_288 [64];
  longlong local_188;
  undefined1 local_180 [248];
  longlong *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  int *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_2 + 0x1e0);
  local_88 = plVar1;
  local_70 = param_1;
  local_58 = param_2;
  while( true ) {
    while (*(char *)(local_58 + 0x2e0) != '\0') {
      if (*(char *)(local_58 + 0x2e0) == '\x01') {
        cVar4 = *(char *)(local_58 + 0x2e1);
        *(undefined1 *)(local_58 + 0x2e1) = 0;
        if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("`Ready` polled after completionC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\core\\src\\future\\ready.rs"
                        ,0x1f,&DAT_18020ef88);
        }
        *(undefined1 *)(local_58 + 0x2e0) = 2;
      }
      else {
        lVar2 = *plVar1;
        *plVar1 = 3;
        if (lVar2 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("retrying requires cloned requestC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\tower-0.5.3\\src\\retry\\future.rs"
                        ,0x20,&DAT_18020ebf0);
        }
        local_188 = lVar2;
        memcpy(local_180,(void *)(param_2 + 0x1e8),0xf8);
        local_49 = 1;
        FUN_180083c70(local_288,param_2 + 0x1a8,&local_188);
        if (*(int *)plVar1 != 3) {
          FUN_180091e90(local_88);
        }
        memcpy(local_88,local_288,0x100);
        memcpy(local_288,&local_188,0x100);
        local_49 = 0;
        piVar5 = local_288;
        local_60 = (undefined8 *)FUN_18003fb30(local_58);
        local_68 = piVar5;
        if (*(char *)(local_58 + 0x2e0) == '\0') {
          local_80 = *(undefined8 *)(local_58 + 0x2e8);
          local_78 = *(undefined8 **)(local_58 + 0x2f0);
          if ((code *)*local_78 != (code *)0x0) {
            (*(code *)*local_78)(local_80);
          }
          if (local_78[1] != 0) {
            thunk_FUN_1801d3330(local_80,local_78[1],local_78[2]);
          }
        }
        *(undefined1 *)(local_58 + 0x2e0) = 0;
        *(undefined8 **)(local_58 + 0x2e8) = local_60;
        *(int **)(local_58 + 0x2f0) = local_68;
      }
    }
    (**(code **)(*(longlong *)(local_58 + 0x2f0) + 0x18))
              (local_288,*(undefined8 *)(local_58 + 0x2e8),param_3);
    if (local_288[0] == 4) break;
    memcpy(&local_188,local_288,0x98);
    if ((*(int *)plVar1 == 3) ||
       (cVar4 = FUN_1800846f0(param_2 + 0x1a8,plVar1,&local_188), cVar4 == '\x02')) {
      puVar3 = local_70;
      memcpy(local_70,&local_188,0x98);
      return puVar3;
    }
    if (*(char *)(local_58 + 0x2e0) == '\0') {
      local_68 = *(int **)(local_58 + 0x2e8);
      local_60 = *(undefined8 **)(local_58 + 0x2f0);
      if ((code *)*local_60 != (code *)0x0) {
        (*(code *)*local_60)(local_68);
      }
      if (local_60[1] != 0) {
        thunk_FUN_1801d3330(local_68,local_60[1],local_60[2]);
      }
    }
    *(undefined2 *)(local_58 + 0x2e0) = 0x101;
    FUN_180091930(&local_188);
  }
  *local_70 = 4;
  return local_70;
}


