from django.db import models
from django_countries.fields import CountryField
import pytz

# Create your models here.


class User_1174021(models.Model):
    timezone = tuple(zip(pytz.all_timezones,pytz.all_timezones))
    email = models.EmailField(max_length=225, unique=True)
    confirm_email = models.CharField(max_length=225)
    website = models.CharField(max_length=225)
    phones = models.IntegerField()
    time_zones = models.CharField(max_length=225, choices=timezone)
    password = models.CharField(max_length=225)
    confirm_password = models.CharField(max_length=225, default="")
    name = models.CharField(max_length=225)
    company = models.CharField(max_length=225)
    address = models.CharField(max_length=225)
    city = models.CharField(max_length=225)
    state = models.CharField(max_length=225)
    zip_code = models.IntegerField()
    country = CountryField(blank_label='Indonesia')