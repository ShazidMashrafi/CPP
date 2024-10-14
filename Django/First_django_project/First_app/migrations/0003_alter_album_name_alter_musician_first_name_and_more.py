# Generated by Django 5.0.6 on 2024-07-07 21:25

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('First_app', '0002_alter_album_num_stars'),
    ]

    operations = [
        migrations.AlterField(
            model_name='album',
            name='name',
            field=models.CharField(max_length=100, verbose_name='Album name'),
        ),
        migrations.AlterField(
            model_name='musician',
            name='first_name',
            field=models.CharField(max_length=50, verbose_name='First name'),
        ),
        migrations.AlterField(
            model_name='musician',
            name='instrument',
            field=models.CharField(max_length=50, verbose_name='Instrument'),
        ),
        migrations.AlterField(
            model_name='musician',
            name='last_name',
            field=models.CharField(max_length=50, verbose_name='Last name'),
        ),
    ]
