/* FUN_1801b8590 @ 1801b8590 */

longlong FUN_1801b8590(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1801b5340(param_1,&local_11);
  pauVar2 = *(undefined1 (**) [16])(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x40);
  auVar1 = *pauVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 (**) [16])(param_1 + 0x120) = pauVar2;
  *(undefined1 (**) [16])(param_1 + 0x128) = pauVar2 + 1;
  *(undefined1 **)(param_1 + 0x130) = *pauVar2 + lVar3 + 1;
  *(ushort *)(param_1 + 0x138) =
       ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 | (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  return param_1;
}


