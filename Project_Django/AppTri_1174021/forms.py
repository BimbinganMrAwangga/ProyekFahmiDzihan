from django import forms
from AppTri_1174021.models import User_1174021
from captcha.fields import CaptchaField

class NewUserForm(forms.ModelForm):
    captcha = CaptchaField()
    class Meta:
        model = User_1174026
        fields = '__all__'

        widgets = {
            'password': forms.PasswordInput(),
            'confirm_password': forms.PasswordInput()
        }