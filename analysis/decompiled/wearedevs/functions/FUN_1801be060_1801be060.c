/* FUN_1801be060 @ 1801be060 */

void FUN_1801be060(longlong *param_1,LPCWSTR param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  LPWSTR *hMem;
  int *piVar4;
  longlong lVar5;
  int *pNumArgs;
  LPWSTR *ppWVar6;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  pNumArgs = local_4c;
  hMem = CommandLineToArgvW(param_2,pNumArgs);
  if (hMem == (LPWSTR *)0x0) {
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
  }
  else {
    local_68 = 0;
    lStack_60 = 8;
    local_58 = 0;
    for (ppWVar6 = hMem; ppWVar6 != hMem + local_4c[0]; ppWVar6 = ppWVar6 + 1) {
      piVar4 = (int *)FUN_1801c9600(ppWVar6);
      FUN_1801e5470(&local_88,piVar4,pNumArgs);
      lVar3 = local_58;
      if (local_58 == local_68) {
        FUN_180200d10(&local_68);
      }
      lVar5 = lVar3 * 0x20;
      puVar2 = (undefined8 *)(lStack_60 + 0x10 + lVar5);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar1 = (undefined4 *)(lStack_60 + lVar5);
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      local_58 = lVar3 + 1;
      pNumArgs = piVar4;
    }
    LocalFree(hMem);
    *param_1 = local_68;
    param_1[1] = lStack_60;
    param_1[2] = local_58;
  }
  return;
}


