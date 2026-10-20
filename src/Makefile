Test3DVector: 	
	Test3DVector.o Vector3D.o gcc -o Test3DVector Test3DVector.o Vector3D.o

Test3DVector.o: 
	Test3DVector.c Vector3D.h gcc -c Test3DVector.c

Vector3D.o: Vector3D.c Vector3D.h gcc -c Vector3D.c

clean:
	rm -f Test3DVector.o Vector3D.o Test3DVector

.PHONY: clean