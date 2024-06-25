select products.name, providers.name, products.price
from categories inner join products
on products.id_categories = categories.id 
    inner join providers on products.id_providers = providers.id
where products.price > 1000 and categories.name = 'Super Luxury';
